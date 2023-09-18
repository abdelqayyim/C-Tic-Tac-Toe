// Boost.Geometry
// Unit Test

// Copyright (c) 2021, Oracle and/or its affiliates.

// Contributed and/or modified by Adam Wulkiewicz, on behalf of Oracle

// Licensed under the Boost Software License version 1.0.
// http://www.boost.org/users/license.html


#include <geometry_test_common.hpp>

#include <boost/geometry/algorithms/area.hpp>

#include <boost/geometry/geometries/point.hpp>
#include <boost/geometry/geometries/box.hpp>

#include <boost/geometry/strategies/area/cartesian.hpp>
#include <boost/geometry/strategies/area/geographic.hpp>
#include <boost/geometry/strategies/area/spherical.hpp>


using point_t = bg::model::point<double, 2, bg::cs::geographic<bg::degree>>;
using box_t = bg::model::box<point_t>;

struct result_t
{
    box_t box;
    double area_c;
    double area_s;
    double area_g;
};

result_t results[] =
{
    {{{   0,    0}, {   0,    0}}, 0, 0, 0},
    {{{   1,    0}, {   1,    0}}, 0, 0, 0},
    {{{  -1,    0}, {   -1,   0}}, 0, 0, 0},
    {{{  -1,   -1}, {   -1,  -1}}, 0, 0, 0},
    {{{  -1,    1}, {   -1,   1}}, 0, 0, 0},
    {{{   1,   -1}, {    1,  -1}}, 0, 0, 0},
    {{{   1,    1}, {    1,   1}}, 0, 0, 0},


    {{{   0,   90}, {    0,  90}}, 0, 0, 0},
    {{{   0,   90}, {   10,  90}}, 0, 0, 0},
    {{{-170,   90}, {  170,  90}}, 0, 0, 0},
    {{{   0,  -90}, {    0, -90}}, 0, 0, 0},
    {{{   0,  -90}, {   10, -90}}, 0, 0, 0},
    {{{-170,  -90}, {  170, -90}}, 0, 0, 0},

    {{{   0,    0}, {   0,    1}}, 0, 0, 0},
    {{{   0,    0}, {   1,    0}}, 0, 0, 0},
    {{{  -1,    0}, {   1,    0}}, 0, 0, 0},
    {{{   0,   -1}, {   0,    1}}, 0, 0, 0},
    {{{   0,    1}, {   0,    2}}, 0, 0, 0},
    {{{   0,   -2}, {   0,   -1}}, 0, 0, 0},
    {{{   1,    0}, {   2,    0}}, 0, 0, 0},
    {{{  -2,    0}, {   1,    0}}, 0, 0, 0},
    {{{   5,    1}, {   5,    2}}, 0, 0, 0},
    {{{   5,   -2}, {   5,   -1}}, 0, 0, 0},
    {{{   1,    5}, {   2,    5}}, 0, 0, 0},
    {{{  -2,    5}, {   1,    5}}, 0, 0, 0},

    {{{   0,   0}, {  45,   15}},    675,   8250922691759.2373,  8216494347422.6777},
    {{{ -45,   0}, {   0,   15}},    675,   8250922691759.2373,  8216494347422.6777},
    {{{  15,   0}, {  45,   15}},    450,   5500615127839.4922,  5477662898281.7852},
    {{{ -45,   0}, { -15,   15}},    450,   5500615127839.4922,  5477662898281.7852},
    {{{ -45,   0}, {  45,   15}},   1350,  16501845383518.475,  16432988694845.355},
    {{{ 135,   0}, { 225,   15}},   1350,  16501845383518.475,  16432988694845.355},

    {{{   0, -15}, {  45,    0}},    675,   8250922691759.2373,  8216494347422.6777},
    {{{ -45, -15}, {   0,    0}},    675,   8250922691759.2373,  8216494347422.6777},
    {{{  15, -15}, {  45,    0}},    450,   5500615127839.4922,  5477662898281.7852},
    {{{ -45, -15}, { -15,    0}},    450,   5500615127839.4922,  5477662898281.7852},
    {{{ -45, -15}, {  45,    0}},   1350,  16501845383518.475,  16432988694845.355},
    {{{ 135, -15}, { 225,    0}},   1350,  16501845383518.475,  16432988694845.355},

    {{{   0, -15}, {  45,   15}},   1350,  16501845383518.475,  16432988694845.355},
    {{{ -45, -15}, {   0,   15}},   1350,  16501845383518.475,  16432988694845.355},
    {{{  15, -15}, {  45,   15}},    900,  11001230255678.984,  10955325796563.57},
    {{{ -45, -15}, { -15,   15}},    900,  11001230255678.984,  10955325796563.57},
    {{{ -45, -15}, {  45,   15}},   2700,  33003690767036.949,  32865977389690.711},
    {{{ 135, -15}, { 225,   15}},   2700,  33003690767036.949,  32865977389690.711},

    {{{   0,   30}, {  45,   45}},   675,   6602381365839.6738,  6605362478329.0664},
    {{{ -45,   30}, {   0,   45}},   675,   6602381365839.6738,  6605362478329.0664},
    {{{  15,   30}, {  45,   45}},   450,   4401587577226.4502,  4403574985552.7109},
    {{{ -45,   30}, { -15,   45}},   450,   4401587577226.4502,  4403574985552.7109},
    {{{ -45,   30}, {  45,   45}},  1350,  13204762731679.348,  13210724956658.133},
    {{{ 135,   30}, { 225,   45}},  1350,  13204762731679.348,  13210724956658.133},

    {{{   0,  -45}, {  45,  -30}},   675,   6602381365839.6738,  6605362478329.0664},
    {{{ -45,  -45}, {   0,  -30}},   675,   6602381365839.6738,  6605362478329.0664},
    {{{  15,  -45}, {  45,  -30}},   450,   4401587577226.4502,  4403574985552.7109},
    {{{ -45,  -45}, { -15,  -30}},   450,   4401587577226.4502,  4403574985552.7109},
    {{{ -45,  -45}, {  45,  -30}},  1350,  13204762731679.348,  13210724956658.133},
    {{{ 135,  -45}, { 225,  -30}},  1350,  13204762731679.348,  13210724956658.133},

    {{{   0,  -30}, { 100,   90}}, 12000, 106263724249130.22,  106144744679373.83},
    {{{-100,  -30}, {   0,   90}}, 12000, 106263724249130.22,  106144744679373.83},
    {{{  10,  -30}, { 100,   90}}, 10800,  95637351824217.188,  95530270211436.438},
    {{{-100,  -30}, { -10,   90}}, 10800,  95637351824217.188,  95530270211436.438},
    {{{-100,  -30}, { 100,   90}}, 24000, 212527448498260.44,  212289489358747.66},
    {{{ 100,  -30}, { 300,   90}}, 24000, 212527448498260.44,  212289489358747.66},

    {{{   0,  -90}, { 100,   30}}, 12000, 106263724249130.22,  106144744679373.83},
    {{{-100,  -90}, {   0,   30}}, 12000, 106263724249130.22,  106144744679373.83},
    {{{  10,  -90}, { 100,   30}}, 10800,  95637351824217.188,  95530270211436.438},
    {{{-100,  -90}, { -10,   30}}, 10800,  95637351824217.188,  95530270211436.438},
    {{{-100,  -90}, { 100,   30}}, 24000, 212527448498260.44,  212289489358747.66},
    {{{ 100,  -90}, { 300,   30}}, 24000, 212527448498260.44,  212289489358747.66},

    {{{   0,  -90}, { 170,   90}}, 30600, 240864441631361.81,  240864321369708.47},
    {{{-170,  -90}, {   0,   90}}, 30600, 240864441631361.81,  240864321369708.47},
    {{{  10,  -90}, { 170,   90}}, 28800, 226695945064811.13,  226695831877372.72},
    {{{-170,  -90}, { -10,   90}}, 28800, 226695945064811.13,  226695831877372.72},
    {{{-170,  -90}, { 170,   90}}, 61200, 481728883262723.63,  481728642739416.94},
    {{{ 170,  -90}, { 510,   90}}, 61200, 481728883262723.63,  481728642739416.94},

    {{{-170,  -90}, { 180,   90}}, 63000, 495897379829274.31,  495897132231752.75},
    {{{-180,  -90}, { 170,   90}}, 63000, 495897379829274.31,  495897132231752.75},
    {{{-180,  -90}, { 180,   90}}, 64800, 510065876395825.0,   510065621724088.5}
};

size_t results_n = sizeof(results) / sizeof(result_t);


int test_main(int, char* [])
{
    bg::srs::spheroid<double> s;
    double r = bg::formula::mean_radius<double>(s);

    for (size_t i = 0; i < results_n; ++i)
    {
        result_t const& t = results[i];
        double a = bg::area(t.box);
        double ac = bg::area(t.box, bg::strategies::area::cartesian<>());
        double as = bg::area(t.box, bg::strategies::area::spherical<>(r));
        double ag = bg::area(t.box, bg::strategies::area::geographic<>(s));

        BOOST_CHECK_CLOSE(a,  t.area_g, 0.00000001);
        BOOST_CHECK_CLOSE(ac, t.area_c, 0.00000001);
        BOOST_CHECK_CLOSE(as, t.area_s, 0.00000001);
        BOOST_CHECK_CLOSE(ag, t.area_g, 0.00000001);
    }

    return 0;
}
