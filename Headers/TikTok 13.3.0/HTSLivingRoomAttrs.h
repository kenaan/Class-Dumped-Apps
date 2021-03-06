//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface HTSLivingRoomAttrs : MTLModel <MTLJSONSerializing>
{
    NSNumber *_adminFlag;
    NSNumber *_silenceFlag;
    NSNumber *_superAdminFlag;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSNumber *superAdminFlag; // @synthesize superAdminFlag=_superAdminFlag;
@property(copy, nonatomic) NSNumber *silenceFlag; // @synthesize silenceFlag=_silenceFlag;
@property(copy, nonatomic) NSNumber *adminFlag; // @synthesize adminFlag=_adminFlag;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

