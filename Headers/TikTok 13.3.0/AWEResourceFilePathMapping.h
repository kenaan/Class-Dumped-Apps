//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AWEResourceFilePathMapping : NSObject
{
    NSMutableDictionary *_datas;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *datas; // @synthesize datas=_datas;
- (void).cxx_destruct;
- (id)mappingURLsArray:(id)arg1 channel:(id)arg2 identify:(id)arg3;
- (void)addMappingToChannel:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

