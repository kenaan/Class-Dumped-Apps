//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWELocationSubdivision : MTLModel <MTLJSONSerializing>
{
    NSString *_code;
    NSString *_localCode;
    NSString *_name;
    NSString *_enName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *enName; // @synthesize enName=_enName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *localCode; // @synthesize localCode=_localCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

