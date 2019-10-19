//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HTSLiveMessageListNode, LiveRoomModel, MASConstraint, UIImageView, UILabel, UIView;
@protocol HTSLiveDetailRouter, HTSLiveMessageListActions, HTSLivePushMessageActions, IESLiveEnvironment, IESLiveTracker, IESLiveUserService;

@interface LiveMessageListPersonalCellViewB : UITableViewCell
{
    HTSLiveMessageListNode *_node;
    LiveRoomModel *_liveRoomModel;
    UILabel *_contentLabel;
    UIView *_background;
    UIImageView *_suffixImageView;
    UIImageView *_iconImageView;
    MASConstraint *_contentWidthCons;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <HTSLiveDetailRouter> _router;
    id <HTSLiveMessageListActions> _dispatcher;
    id <HTSLivePushMessageActions> _pushMesageActionCreator;
    id <IESLiveEnvironment> _appTarget;
    long long _liveFontWeight;
}

@property(nonatomic) long long liveFontWeight; // @synthesize liveFontWeight=_liveFontWeight;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <HTSLivePushMessageActions> pushMesageActionCreator; // @synthesize pushMesageActionCreator=_pushMesageActionCreator;
@property(retain, nonatomic) id <HTSLiveMessageListActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) MASConstraint *contentWidthCons; // @synthesize contentWidthCons=_contentWidthCons;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIImageView *suffixImageView; // @synthesize suffixImageView=_suffixImageView;
@property(nonatomic) __weak UIView *background; // @synthesize background=_background;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) LiveRoomModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
@property(retain, nonatomic) HTSLiveMessageListNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (void)loadViews;
- (void)pr_click:(id)arg1;
- (void)refreshWith:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

