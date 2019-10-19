//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (AWEAdditions)
+ (void)load;
- (struct CGRect)awe_frameInView:(id)arg1;
- (void)awe_layoutSubviews;
- (CDUnknownBlockType)awe_layoutSubviewsBlock;
- (void)setAwe_layoutSubviewsBlock:(CDUnknownBlockType)arg1;
- (struct UIEdgeInsets)awe_safeAdjustment;
- (id)awe_roundedImage:(id)arg1;
- (id)innerLayer;
- (void)setInnerLayer:(id)arg1;
- (double)awe_cornerRadius;
- (void)setAwe_cornerRadius:(double)arg1;
- (id)awe_colorOfPoint:(struct CGPoint)arg1;
- (id)awe_snapshotImageViewAfterScreenUpdates:(_Bool)arg1;
- (id)awe_snapshotImageView;
- (id)awe_snapshotImageAfterScreenUpdates:(_Bool)arg1 withSize:(struct CGSize)arg2;
- (id)awe_snapshotImageAfterScreenUpdates:(_Bool)arg1;
- (id)awe_snapshotImage;
- (void)awe_addSystemBlurEffect:(long long)arg1;
- (void)awe_addBlurEffect;
- (void)awe_addRotateAnimationWithDuration:(double)arg1 forKey:(id)arg2;
- (void)awe_addRotateAnimationWithDuration:(double)arg1;
- (id)awe_touchViewWithSize:(struct CGSize)arg1;
- (id)awe_touchView;
- (void)awe_disableUserInteractionWithTimeInterval:(double)arg1;
@end

