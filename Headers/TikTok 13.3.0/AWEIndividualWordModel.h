//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "AWEIrregularWordProtocol-Protocol.h"
#import "AWERegularWordProtocol-Protocol.h"

@class NSString;

@interface AWEIndividualWordModel : AWEBaseApiModel <AWEIrregularWordProtocol, AWERegularWordProtocol>
{
    NSString *_wordID;
    NSString *_content;
    NSString *_individualWordType;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *individualWordType; // @synthesize individualWordType=_individualWordType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *wordID; // @synthesize wordID=_wordID;
- (void).cxx_destruct;
- (id)getWordID;
- (long long)defaultStyle;
- (id)getContentString;
- (id)getSearchWord;
- (id)getDisplayWord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

