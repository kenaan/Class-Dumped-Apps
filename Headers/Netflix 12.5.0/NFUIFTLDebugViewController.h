//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UITextField;

@interface NFUIFTLDebugViewController : UIViewController
{
    UILabel *_currentEndpoint;
    UIButton *_startSessionButton;
    UIButton *_stopSessionButton;
    UITextField *_simsOptsTextField;
}

@property(nonatomic) __weak UITextField *simsOptsTextField; // @synthesize simsOptsTextField=_simsOptsTextField;
@property(nonatomic) __weak UIButton *stopSessionButton; // @synthesize stopSessionButton=_stopSessionButton;
@property(nonatomic) __weak UIButton *startSessionButton; // @synthesize startSessionButton=_startSessionButton;
@property(nonatomic) __weak UILabel *currentEndpoint; // @synthesize currentEndpoint=_currentEndpoint;
- (void).cxx_destruct;
- (void)endFTLSession;
- (void)setFTLEndpoint:(id)arg1;
- (_Bool)hasActiveFTLSession;
- (void)stopSession:(id)arg1;
- (void)startSession:(id)arg1;
- (void)goBack:(id)arg1;
- (void)configureUIBarButtons;
- (void)configureUI;
- (void)updateColors;
- (void)viewDidLoad;
- (id)title;

@end

