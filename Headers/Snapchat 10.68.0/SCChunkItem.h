//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCMediaOwnerProtocol-Protocol.h"

@class NSString;

@interface SCChunkItem : NSObject <NSCoding, SCMediaOwnerProtocol>
{
    NSString *__id;
    NSString *_name;
    unsigned long long _type;
}

+ (unsigned long long)dockingForString:(id)arg1;
+ (unsigned long long)itemTypeForString:(id)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (void)saveMediaToCache;
- (_Bool)imageMediaExistsInCache;
- (id)cacheMediaIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
