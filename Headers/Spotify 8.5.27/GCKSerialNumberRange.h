//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKSerialNumberRange : NSObject
{
    unsigned long long _firstSerialNumber;
    unsigned long long _lastSerialNumber;
}

@property(readonly, nonatomic) unsigned long long lastSerialNumber; // @synthesize lastSerialNumber=_lastSerialNumber;
@property(readonly, nonatomic) unsigned long long firstSerialNumber; // @synthesize firstSerialNumber=_firstSerialNumber;
- (_Bool)containsNumber:(unsigned long long)arg1;
- (id)initWithProto:(id)arg1;

@end
