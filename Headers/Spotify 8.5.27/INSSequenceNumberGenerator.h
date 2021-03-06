//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSSequenceNumberGeneratorProtocol-Protocol.h"

@class NSString;
@protocol INSKeyValueStorageProtocol, INSLogger;

@interface INSSequenceNumberGenerator : NSObject <INSSequenceNumberGeneratorProtocol>
{
    id <INSLogger> _logger;
    id <INSKeyValueStorageProtocol> _keyValueStorage;
}

@property(retain, nonatomic) id <INSKeyValueStorageProtocol> keyValueStorage; // @synthesize keyValueStorage=_keyValueStorage;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)localErrorWithDescription:(id)arg1;
- (void)logMissingEventNameErrorFromFunction:(char [62])arg1;
- (long long)lastSequenceNumberForEventName:(id)arg1;
- (long long)nextSequenceNumberForEventName:(id)arg1;
- (id)initWithKeyValueStorage:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

