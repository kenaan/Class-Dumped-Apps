//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UIImageView, UILabel, YYLabel;

@interface AWEIMTranspondListAlertTopView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UILabel *_titleLabel;
    UIImageView *_avatarView;
    UILabel *_userNameLabel;
    UIView *_separateView;
    UIImageView *_videoCoverImage;
    UIImageView *_verifiedLogoView;
    UICollectionView *_collectionView;
    NSArray *_dataList;
    YYLabel *_contentLabel;
    UILabel *_descLabel;
}

+ (id)cropSquareImage:(id)arg1 withSize:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *verifiedLogoView; // @synthesize verifiedLogoView=_verifiedLogoView;
@property(retain, nonatomic) UIImageView *videoCoverImage; // @synthesize videoCoverImage=_videoCoverImage;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)p_setMixVideoCoverImageView:(id)arg1;
- (void)p_setWebViewCoverImageView:(id)arg1;
- (void)p_setProfileCoverImageView:(id)arg1;
- (void)p_setLiveRoomCoverImageView:(id)arg1;
- (void)p_setGameCoverImageView:(id)arg1;
- (void)p_setTrendingCoverImageView:(id)arg1;
- (void)p_setMusicCoverImageView:(id)arg1;
- (void)p_setChallengeCoverImageView:(id)arg1;
- (void)p_setMixVideoMessageViewWithForwardMsg:(id)arg1;
- (void)p_setPoiCouponTextMessageViewWithForwardMsg:(id)arg1;
- (void)p_setShareStickerMessageViewWithForwardMsg:(id)arg1;
- (void)p_setVideoCardMsgImageView:(id)arg1;
- (void)p_setMusicMsgImageView:(id)arg1;
- (void)p_setWebviewMagImageView:(id)arg1;
- (void)p_setProfileMagImageView:(id)arg1;
- (void)p_setLiveMagImageView:(id)arg1;
- (void)p_setShopMagImageView:(id)arg1;
- (void)p_setGoodsMagImageView:(id)arg1;
- (void)p_setPOIMagImageView:(id)arg1;
- (void)p_setTextMessageCoverImageView:(id)arg1;
- (void)p_setEncryptedImageMessageCoverImageView:(id)arg1;
- (void)p_setImageMessageCoverImageView:(id)arg1;
- (void)p_setVideoMessageCoverImageView:(id)arg1;
- (void)p_setShanMengMessageCoverImageView:(id)arg1;
- (void)p_setGiphyMessageCoverImageView:(id)arg1;
- (void)p_setPOICouponTextMessageViewWithText:(id)arg1;
- (void)p_setPOICouponTextMessageViewWithPoi:(id)arg1;
- (void)p_setECommerceContentLabelText:(id)arg1 sub:(id)arg2;
- (void)p_setShareStickerCoverImageView:(id)arg1;
- (void)p_setGoodsCoverImageView:(id)arg1;
- (void)p_setShopCoverImageView:(id)arg1;
- (void)p_setPOICoverImageView:(id)arg1;
- (void)p_setAwemeCoverImageView:(id)arg1;
- (struct CGSize)getContentLabelViewSize;
- (struct CGSize)getCoverImageViewSize;
- (id)p_verifyBadgeImageByUser:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)isSendToUsers:(_Bool)arg1;
- (void)p_setCoverWithDict:(id)arg1;
- (void)p_refreshUIWithShareModel:(id)arg1;
- (void)updateWithShareModels:(id)arg1;
- (void)configWithShareModels:(id)arg1 modelDict:(id)arg2;
- (void)layoutSubviews;
- (void)p_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

