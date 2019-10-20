//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, UIButton, UILabel;

@interface AWEProfileSocialStatisticView : UIView
{
    CDUnknownBlockType _followClickedBlock;
    CDUnknownBlockType _fansnClickedBlock;
    CDUnknownBlockType _praiseClickedBlock;
    UILabel *_followLabel;
    UILabel *_fansLabel;
    UILabel *_praiseLabel;
    UIButton *_followPrefixBtn;
    UIButton *_fansPrefixBtn;
    UIButton *_praisePrefixBtn;
    NSNumber *_followingCount;
    NSNumber *_fansCount;
    NSNumber *_praiseCount;
}

@property(retain, nonatomic) NSNumber *praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSNumber *fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) NSNumber *followingCount; // @synthesize followingCount=_followingCount;
@property(retain, nonatomic) UIButton *praisePrefixBtn; // @synthesize praisePrefixBtn=_praisePrefixBtn;
@property(retain, nonatomic) UIButton *fansPrefixBtn; // @synthesize fansPrefixBtn=_fansPrefixBtn;
@property(retain, nonatomic) UIButton *followPrefixBtn; // @synthesize followPrefixBtn=_followPrefixBtn;
@property(retain, nonatomic) UILabel *praiseLabel; // @synthesize praiseLabel=_praiseLabel;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(copy, nonatomic) CDUnknownBlockType praiseClickedBlock; // @synthesize praiseClickedBlock=_praiseClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType fansnClickedBlock; // @synthesize fansnClickedBlock=_fansnClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType followClickedBlock; // @synthesize followClickedBlock=_followClickedBlock;
- (void).cxx_destruct;
- (void)praiseBtnClicked;
- (void)fansBtnClicked;
- (void)followBtnClicked;
- (void)p_updateSocialStatisticContent:(_Bool)arg1;
- (void)p_setUpUI;
- (void)p_setUpSymmetricUI;
- (void)changeLabelInTeenMode:(_Bool)arg1;
- (void)updateFansLabel:(id)arg1;
- (void)updateFollowingCount:(id)arg1 fansCount:(id)arg2 praiseCount:(id)arg3 isLoaded:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end
