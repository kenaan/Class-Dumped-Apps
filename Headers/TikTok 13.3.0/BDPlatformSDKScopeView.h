//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BDPlatformSDKScopeItem, UIColor, UIImageView, UILabel;

@interface BDPlatformSDKScopeView : UITableViewCell
{
    BDPlatformSDKScopeItem *_item;
    UIColor *_color;
    UIColor *_bgColor;
    UIImageView *_icomImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icomImageView; // @synthesize icomImageView=_icomImageView;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) BDPlatformSDKScopeItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

