//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface SCFideliusUserDevice : NSObject <NSCoding>
{
    _Bool _temporary;
    NSString *_databaseName;
    NSString *_hashedBeta;
    NSNumber *_timestamp;
}

@property(nonatomic) _Bool temporary; // @synthesize temporary=_temporary;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *hashedBeta; // @synthesize hashedBeta=_hashedBeta;
@property(retain, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDatabaseName:(id)arg1 hashedBeta:(id)arg2 timestamp:(id)arg3 temporary:(_Bool)arg4;

@end

