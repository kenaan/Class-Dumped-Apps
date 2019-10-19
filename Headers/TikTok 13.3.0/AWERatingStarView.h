//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol AWERatingStartViewDelegate;

@interface AWERatingStarView : UIView
{
    double _index;
    id <AWERatingStartViewDelegate> _delegate;
}

+ (id)createLayer:(struct CGSize)arg1;
+ (id)createStarLayerWithImgae:(id)arg1 size:(struct CGSize)arg2;
+ (id)createPartialStarWithFillPercentage:(double)arg1 fullImage:(id)arg2 emptyImage:(id)arg3 size:(struct CGSize)arg4 index:(double)arg5;
+ (id)createStarWithImage:(id)arg1 size:(struct CGSize)arg2 index:(double)arg3;
@property(nonatomic) __weak id <AWERatingStartViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)onTaped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2;

@end

