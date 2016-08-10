/* iir coefficients for various filters */
const bq_coeffs c[] =
{
	/* 8000 Hz */
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000,  1.6065,  0.7936},  0.8500},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000,  1.3629,  0.5216},  0.7211},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000,  1.2532,  0.3991},  0.6631},

	/* 6000 Hz */
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000,  0.6900,  0.6205},  0.5776},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000,  0.5193,  0.2197},  0.4347},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000,  0.4544,  0.0672},  0.3804},

	/* 4000 Hz */
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -0.3648,  0.5975},  0.3082},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -0.2705,  0.1845},  0.2285},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -0.2354,  0.0307},  0.1988},

	/* 2000 Hz */
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -1.3503,  0.7230},  0.0932},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -1.0891,  0.3896},  0.0751},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -0.9796,  0.2500},  0.0676},

	/* 1000 Hz */
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -1.7406,  0.8431},  0.0256},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -1.5324,  0.6227},  0.0226},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -1.4334,  0.5178},  0.0211},

	/* 500 Hz */
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -1.8904,  0.9172},  0.0067},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -1.7640,  0.7890},  0.0063},
	{{ 1.0000,  2.0000,  1.0000}, { 1.0000, -1.6984,  0.7225},  0.0060},

};