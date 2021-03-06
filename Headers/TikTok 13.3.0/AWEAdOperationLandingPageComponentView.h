//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEAdOperationComponentViewProtocol-Protocol.h"

@class AWEAwemeModel, NSString, UIImageView;

@interface AWEAdOperationLandingPageComponentView : UIView <AWEAdOperationComponentViewProtocol>
{
    CDUnknownBlockType _dismissBlock;
    NSString *_eventName;
    AWEAwemeModel *_model;
    UIImageView *_landingImageView;
}

@property(retain, nonatomic) UIImageView *landingImageView; // @synthesize landingImageView=_landingImageView;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)componentTapped:(id)arg1;
- (void)setupUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

