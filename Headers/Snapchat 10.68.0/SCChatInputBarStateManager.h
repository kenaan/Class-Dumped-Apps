//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextInputMode;
@protocol SCChatInputBarStateManagerDatasource, SCChatInputBarStateManagerDelegate;

@interface SCChatInputBarStateManager : NSObject
{
    double _lastComputedFinalTextLength;
    _Bool _isCurrentInputModeEmoji;
    unsigned long long _state;
    double _transitionToExpandedWidth;
    double _transitionToNormalWidth;
    id <SCChatInputBarStateManagerDelegate> _delegate;
    id <SCChatInputBarStateManagerDatasource> _datasource;
    UITextInputMode *_cachedInputMode;
}

@property(nonatomic) _Bool isCurrentInputModeEmoji; // @synthesize isCurrentInputModeEmoji=_isCurrentInputModeEmoji;
@property(retain, nonatomic) UITextInputMode *cachedInputMode; // @synthesize cachedInputMode=_cachedInputMode;
@property(nonatomic) __weak id <SCChatInputBarStateManagerDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak id <SCChatInputBarStateManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double transitionToNormalWidth; // @synthesize transitionToNormalWidth=_transitionToNormalWidth;
@property(nonatomic) double transitionToExpandedWidth; // @synthesize transitionToExpandedWidth=_transitionToExpandedWidth;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_currentInputModeDidChange:(id)arg1;
- (void)_registerNotifications;
- (unsigned long long)_stateForReplacementText:(id)arg1 range:(struct _NSRange)arg2;
- (void)resetInputMode;
- (void)updateWithReplacementText:(id)arg1 range:(struct _NSRange)arg2;
- (id)init;

@end

