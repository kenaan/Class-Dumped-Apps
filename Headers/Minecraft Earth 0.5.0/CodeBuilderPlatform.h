//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CodeBuilderPlatform : NSObject
{
}

- (void)dismissCodeScreen;
- (_Bool)supportsPartialTransparency;
- (struct CodeBuilderMessageHandlerInterface *)getMessageHandler;
- (void)queueToGameThread:(CDUnknownBlockType)arg1;
- (void)queueToUIThread:(CDUnknownBlockType)arg1;
- (void)setAlpha:(float)arg1 onWebView:(id)arg2;
- (void)setWebView:(id)arg1 isHidden:(_Bool)arg2;
- (void)setRect:(const struct RectangleArea *)arg1 forWebView:(id)arg2;
- (void)removeWebViewFromWindow:(id)arg1;
- (void)addWebViewToWindow:(id)arg1;
- (void)closeSession;
- (void)releaseObject:(id)arg1;

@end
