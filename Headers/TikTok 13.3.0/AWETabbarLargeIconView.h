//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWETabbarInnerView-Protocol.h"

@class NSString, UIImage, UIImageView;

@interface AWETabbarLargeIconView : UIView <AWETabbarInnerView>
{
    UIImageView *_normalImageView;
    UIImageView *_selectedImageView;
    UIImage *_normalImage;
    UIImage *_selectedImage;
    UIImage *_transparentImage;
}

@property(retain, nonatomic) UIImage *transparentImage; // @synthesize transparentImage=_transparentImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIImageView *normalImageView; // @synthesize normalImageView=_normalImageView;
- (void).cxx_destruct;
- (void)feedStatusDidChange:(long long)arg1;
- (void)tabbarStatusDidChanged:(long long)arg1 animated:(_Bool)arg2;
- (double)indicatorWidth;
- (struct CGRect)convertRect:(struct CGRect)arg1 usingScale:(double)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 transparentImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

