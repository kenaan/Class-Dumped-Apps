//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEAnimatedButton, UIImageView;

@interface AWECoverGalleryTableViewCell : UITableViewCell
{
    CDUnknownBlockType _cellTapBlock;
    UIImageView *_coverImageView;
    AWEAnimatedButton *_settingButton;
    long long _currentIndex;
}

+ (double)cellHeight;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) AWEAnimatedButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(copy, nonatomic) CDUnknownBlockType cellTapBlock; // @synthesize cellTapBlock=_cellTapBlock;
- (void).cxx_destruct;
- (void)settingButtonTap:(id)arg1;
- (void)setCoverImage:(id)arg1 selected:(_Bool)arg2 index:(long long)arg3;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

