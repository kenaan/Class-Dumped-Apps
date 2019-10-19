//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol GADNEventContextSource, OS_dispatch_queue;

@interface GADNActionURLHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _bufferActionsPaused;
    NSMutableArray *_bufferedURLRequests;
    id <GADNEventContextSource> _messageSource;
}

- (void).cxx_destruct;
- (void)resumeBufferedActions;
- (void)pauseBufferedActions;
- (void)handleActionURLRequest:(id)arg1;
- (void)dealloc;
- (id)initWithMessageSource:(id)arg1;

@end

