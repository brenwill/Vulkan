/*
 *  examples.h
 *
 *  Copyright (c) 2016-2017 The Brenwill Workshop Ltd.
 *  This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
 *
 *
 * Loads the appropriate example code, as indicated by the appropriate compiler build setting below.
 *
 * To select an example to run, define one (and only one) of the macros below, either by 
 * adding a #define XXX statement at the top of this file, or more flexibily, by adding the 
 * macro value to the Preprocessor Macros (aka GCC_PREPROCESSOR_DEFINITIONS) compiler setting.
 *
 * To add a compiler setting, select the project in the Xcode Project Navigator panel, 
 * select the Build Settings panel, and add the value to the Preprocessor Macros 
 * (aka GCC_PREPROCESSOR_DEFINITIONS) entry.
 *
 * For example, to run the pipelines example, you would add the MVK_pipelines define macro 
 * to the Preprocessor Macros (aka GCC_PREPROCESSOR_DEFINITIONS) entry of the Xcode project,
 * overwriting any otheor value there.
 *
 * If you choose to add a #define statement to this file, be sure to clear the existing macro
 * from the Preprocessor Macros (aka GCC_PREPROCESSOR_DEFINITIONS) compiler setting in Xcode.
 */


// In the list below, the comments indicate entries that,
// under certain conditions, that may not run as expected.


// BASICS

#ifdef MVK_pipelines
#	include "../pipelines/pipelines.cpp"
#endif

#ifdef MVK_texture
#	include "../texture/texture.cpp"
#endif

#ifdef MVK_texturecubemap
#	include "../texturecubemap/texturecubemap.cpp"
#endif

#ifdef MVK_texturearray
#	include "../texturearray/texturearray.cpp"
#endif

#ifdef MVK_mesh
#	include "../mesh/mesh.cpp"
#endif

#ifdef MVK_dynamicuniformbuffer
#	include "../dynamicuniformbuffer/dynamicuniformbuffer.cpp"
#endif

#ifdef MVK_pushconstants
#	include "../pushconstants/pushconstants.cpp"
#endif

#ifdef MVK_specializationconstants
#	include "../specializationconstants/specializationconstants.cpp"
#endif

#ifdef MVK_offscreen
#	include "../offscreen/offscreen.cpp"
#endif

#ifdef MVK_radialblur
#	include "../radialblur/radialblur.cpp"
#endif

#ifdef MVK_textoverlay
#	include "../textoverlay/textoverlay.cpp"
#endif

#ifdef MVK_particlefire
#	include "../particlefire/particlefire.cpp"
#endif


// ADVANCED

#ifdef MVK_multithreading
#	include "../multithreading/multithreading.cpp"
#endif

#ifdef MVK_scenerendering
#	include "../scenerendering/scenerendering.cpp"
#endif

#ifdef MVK_instancing
#	include "../instancing/instancing.cpp"
#endif

#ifdef MVK_indirectdraw
#	include "../indirectdraw/indirectdraw.cpp"
#endif

#ifdef MVK_hdr
#	include "../hdr/hdr.cpp"
#endif

#ifdef MVK_occlusionquery
#	include "../occlusionquery/occlusionquery.cpp"
#endif

#ifdef MVK_texturemipmapgen
#	include "../texturemipmapgen/texturemipmapgen.cpp"
#endif

#ifdef MVK_multisampling
#	include "../multisampling/multisampling.cpp"
#endif

#ifdef MVK_shadowmapping
#	include "../shadowmapping/shadowmapping.cpp"
#endif

#ifdef MVK_shadowmappingomni
#	include "../shadowmappingomni/shadowmappingomni.cpp"
#endif

#ifdef MVK_skeletalanimation
#	include "../skeletalanimation/skeletalanimation.cpp"
#endif

#ifdef MVK_bloom
#	include "../bloom/bloom.cpp"
#endif


// DEFERRED

#ifdef MVK_deferred
#	include "../deferred/deferred.cpp"
#endif

// Does not run. Metal does not support geometry shaders.
#ifdef MVK_deferredshadows
#	include "../deferredshadows/deferredshadows.cpp"
#endif

// Runs in Release mode, but does not display content.
// Metal does not support the use of specialization constants to set array lengths,
#ifdef MVK_ssao
#	include "../ssao/ssao.cpp"
#endif


// PHYSICALLY BASED RENDERING


// COMPUTE

#ifdef MVK_computeparticles
#    include "../computeparticles/computeparticles.cpp"
#endif

#ifdef MVK_computenbody
#    include "../computenbody/computenbody.cpp"
#endif

// Does not run. Metal does not natively support deriving length of
// an array in a storage buffer (per GLSL SSBO .length() function).
#ifdef MVK_raytracing
#    include "../raytracing/raytracing.cpp"
#endif

#ifdef MVK_computecullandlod
#    include "../computecullandlod/computecullandlod.cpp"
#endif

#ifdef MVK_computeshader
#    include "../computeshader/computeshader.cpp"
#endif


// TESSELLATION

#ifdef MVK_terraintessellation
#    include "../terraintessellation/terraintessellation.cpp"
#endif

// P-N Triangles
#ifdef MVK_tessellation
#    include "../tessellation/tessellation.cpp"
#endif


// GEOMETRY SHADER - Unsupported by Metal


// EXTENSIONS - Currently unsupported by MoltenVK


// MISC

#ifdef MVK_screenshot
#	include "../screenshot/screenshot.cpp"
#endif

#ifdef MVK_parallaxmapping
#	include "../parallaxmapping/parallaxmapping.cpp"
#endif

#ifdef MVK_sphericalenvmapping
#	include "../sphericalenvmapping/sphericalenvmapping.cpp"
#endif

#ifdef MVK_gears
#	include "../gears/gears.cpp"
#endif

#ifdef MVK_distancefieldfonts
#	include "../distancefieldfonts/distancefieldfonts.cpp"
#endif

#ifdef MVK_vulkanscene
#	include "../vulkanscene/vulkanscene.cpp"
#endif

