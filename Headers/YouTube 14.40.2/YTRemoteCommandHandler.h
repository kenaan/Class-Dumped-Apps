//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTRemoteCommandHandler : NSObject
{
    id <YTRemoteCommandHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (long long)handleNextTrackCommand:(id)arg1;
- (long long)handlePreviousTrackCommand:(id)arg1;
- (long long)handlePauseCommand:(id)arg1;
- (long long)handlePlayCommand:(id)arg1;
- (long long)handleTogglePlayPauseCommand:(id)arg1;
- (void)shutdown;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
