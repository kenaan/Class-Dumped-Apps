//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, UIWindow;

@interface AKFKeyboardStateObserver : NSObject
{
    NSPointerArray *_delegates;
    struct CGRect _pendingKeyboardFrame;
    _Bool _keyboardVisible;
    UIWindow *_keyboardWindow;
    struct CGRect _keyboardFrame;
}

@property(readonly, nonatomic) __weak UIWindow *keyboardWindow; // @synthesize keyboardWindow=_keyboardWindow;
@property(readonly, nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(readonly, nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
- (void).cxx_destruct;
- (void)_updateLayoutForKeyboardFrame:(struct CGRect)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_enumerateDelegatesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

