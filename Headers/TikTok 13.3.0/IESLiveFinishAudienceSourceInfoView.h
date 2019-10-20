//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol IESLiveEnvironment;

@interface IESLiveFinishAudienceSourceInfoView : UIView
{
    UILabel *_followPercentLabel;
    UILabel *_cityPercentLabel;
    UILabel *_recommandPercentLabel;
    id <IESLiveEnvironment> _liveEnvironment;
}

@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) UILabel *recommandPercentLabel; // @synthesize recommandPercentLabel=_recommandPercentLabel;
@property(retain, nonatomic) UILabel *cityPercentLabel; // @synthesize cityPercentLabel=_cityPercentLabel;
@property(retain, nonatomic) UILabel *followPercentLabel; // @synthesize followPercentLabel=_followPercentLabel;
- (void).cxx_destruct;
- (id)makeForSmallLabel;
- (id)makeForLargeLabel;
- (void)loadViews;
- (void)updateWithRoomMode:(id)arg1;
- (id)init;

@end
