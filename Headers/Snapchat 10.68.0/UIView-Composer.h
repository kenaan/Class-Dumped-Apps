//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface UIView (Composer)
+ (id)measurePlaceholderView;
+ (id)remoteContainerViewWithBundleURL:(id)arg1 bundleName:(id)arg2 viewName:(id)arg3 delegate:(id)arg4;
+ (id)viewNamed:(id)arg1 bundleName:(id)arg2 owner:(id)arg3 componentContext:(id)arg4;
+ (id)viewNamed:(id)arg1 bundleName:(id)arg2 owner:(id)arg3;
+ (id)composerViewLoader;
+ (id)composerViewLoaderManager;
+ (id)_composerTouchAreaExtensionComponents;
+ (id)_composerTransformComponents;
+ (void)bindAttributes:(id)arg1;
- (_Bool)canUseMeasurePlaceholderView;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
- (_Bool)willEnqueueIntoComposerPool;
- (void)scrollableContentSizeDidChangeWithSize:(struct CGSize)arg1 rtlOffsetX:(double)arg2;
- (void)invalidateLayoutAndMarkFlexBoxDirty:(_Bool)arg1;
- (void)invalidateLayout;
- (_Bool)composer_setTouchAreaExtensionValue:(id)arg1;
- (_Bool)composer_setTranslationX:(double)arg1 translationY:(double)arg2 scaleX:(double)arg3 scaleY:(double)arg4 rotation:(double)arg5 animator:(id)arg6;
- (_Bool)composer_setAlpha:(double)arg1 animator:(id)arg2;
- (void)composer_resetTouchGestureRecognizerForTouchType:(unsigned long long)arg1;
- (void)composer_setTouchGestureRecognizerForTouchType:(unsigned long long)arg1 function:(id)arg2;
- (void)composer_resetGestureRecognizerForClass:(Class)arg1;
- (void)composer_setupGestureRecognizerForClass:(Class)arg1 function:(id)arg2 predicate:(id)arg3;
- (id)composer_gestureRecognizerForClass:(Class)arg1;
- (_Bool)composer_setBorderWidth:(double)arg1 animator:(id)arg2;
- (_Bool)composer_setBorderRadius:(struct SCComposerCornerValues)arg1 animator:(id)arg2;
- (void)composer_applyBorderRadius:(struct SCComposerCornerValues)arg1 animator:(id)arg2;
- (void)composer_applySlowClipping:(_Bool)arg1 animator:(id)arg2;
- (_Bool)requiresShapeLayerForBorderRadius;
- (_Bool)clipsToBoundsByDefault;
- (_Bool)composer_setBackgroundColor:(id)arg1 animator:(id)arg2;
- (_Bool)composer_setBackground:(id)arg1 animator:(id)arg2;
- (void)composer_layoutBackgroundLayer:(id)arg1 animator:(id)arg2;
- (_Bool)composer_setBorder:(id)arg1 animator:(id)arg2;
- (_Bool)composer_setBorderColor:(id)arg1 animator:(id)arg2;
- (_Bool)composer_setRasterize:(_Bool)arg1;
- (_Bool)composer_setObjectFit:(id)arg1;
- (_Bool)composer_setBoxShadow:(id)arg1 animator:(id)arg2;
- (void)composer_applyShadowPathWithAnimator:(id)arg1;
- (void)removeCSSClass:(id)arg1;
- (void)addCSSClass:(id)arg1;
@end

