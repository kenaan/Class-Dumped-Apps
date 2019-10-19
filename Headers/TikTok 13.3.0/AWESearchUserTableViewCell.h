//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUIListTableViewCell.h"

@class AWEBillboardLabel, AWESearchUser, UIImageView, UILabel, UIView;
@protocol AWEFeedLiveMarkViewProtocol, AWELiveStoryBrowserTagViewProtocol;

@interface AWESearchUserTableViewCell : AWEUIListTableViewCell
{
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    AWESearchUser *_userModel;
    AWEBillboardLabel *_starNameLabel;
    UIImageView *_recommendImageView;
    UILabel *_recommendReasonLabel;
    UIView<AWELiveStoryBrowserTagViewProtocol> *_tagView;
}

+ (long long)cellType;
+ (double)cellHeight;
+ (id)identifier;
+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) UIView<AWELiveStoryBrowserTagViewProtocol> *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UIImageView *recommendImageView; // @synthesize recommendImageView=_recommendImageView;
@property(retain, nonatomic) AWEBillboardLabel *starNameLabel; // @synthesize starNameLabel=_starNameLabel;
@property(retain, nonatomic) AWESearchUser *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
- (void).cxx_destruct;
- (void)canEnterLiveRoom;
- (void)iconImageViewTap;
- (void)goToStarBillboard;
- (void)addHightlightWithAttributeString:(id)arg1 prefixLength:(long long)arg2 positions:(id)arg3;
- (void)configureWithModel:(id)arg1 isRecommended:(_Bool)arg2;
- (void)dealloc;
- (id)initWithCellType:(long long)arg1 cellStyle:(long long)arg2 reuseIdentifier:(id)arg3 enableRebrandingAvatar:(_Bool)arg4;

@end

