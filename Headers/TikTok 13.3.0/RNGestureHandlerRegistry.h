//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RNGestureHandlerRegistry : NSObject
{
    NSMutableDictionary *_handlers;
}

- (void).cxx_destruct;
- (void)dropHandlerWithTag:(id)arg1;
- (void)attachHandlerWithTag:(id)arg1 toView:(id)arg2;
- (void)registerGestureHandler:(id)arg1;
- (id)handlerWithTag:(id)arg1;
- (id)init;

@end

