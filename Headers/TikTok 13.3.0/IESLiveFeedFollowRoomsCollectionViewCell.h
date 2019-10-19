//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "HTSLiveFeedCellUpdater-Protocol.h"

@class HTSLiveFeedFollowRoomView, NSString, UILabel;
@protocol HTSLiveFeedItem, IESLiveSettings;

@interface IESLiveFeedFollowRoomsCollectionViewCell : UICollectionViewCell <HTSLiveFeedCellUpdater>
{
    id <HTSLiveFeedItem> item;
    UILabel *_titleLabel;
    HTSLiveFeedFollowRoomView *_followRoomView;
    id <IESLiveSettings> _liveSettings;
}

@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
@property(retain, nonatomic) HTSLiveFeedFollowRoomView *followRoomView; // @synthesize followRoomView=_followRoomView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) id <HTSLiveFeedItem> item; // @synthesize item;
- (void).cxx_destruct;
- (_Bool)showTitle;
- (void)update:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

