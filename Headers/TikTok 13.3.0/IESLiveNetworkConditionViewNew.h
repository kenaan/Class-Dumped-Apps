//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView;

@interface IESLiveNetworkConditionViewNew : UIView
{
    unsigned long long _level;
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)addIndicatorView;
- (void)addImageViewWithLevel:(long long)arg1;
- (id)_imageWithLevel:(long long)arg1;
- (id)init;

@end

