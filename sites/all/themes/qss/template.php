<?php 

function qss_preprocess_html(&$vars) {
	if( arg(0) == 'xml' && arg(1) == 'example' ) {
		$vars['theme_hook_suggestions'][] = 'html__xml';
	}
}