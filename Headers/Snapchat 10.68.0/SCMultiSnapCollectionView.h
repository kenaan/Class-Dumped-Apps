//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@protocol SCMultiSnapCollectionViewContentSizeDelegate;

@interface SCMultiSnapCollectionView : UICollectionView
{
    _Bool _landscape;
    _Bool _disableAppearanceAnimation;
    id <SCMultiSnapCollectionViewContentSizeDelegate> _contentWidthDelegate;
}

@property(nonatomic) __weak id <SCMultiSnapCollectionViewContentSizeDelegate> contentWidthDelegate; // @synthesize contentWidthDelegate=_contentWidthDelegate;
@property(nonatomic) _Bool disableAppearanceAnimation; // @synthesize disableAppearanceAnimation=_disableAppearanceAnimation;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double preferredHeight;
- (double)secondLastCardCenterOffset;
- (double)lastCardCenterOffset;
- (double)cardsContentLength;
- (struct CGSize)_preferredContentSize;
- (void)changeLayout:(_Bool)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

