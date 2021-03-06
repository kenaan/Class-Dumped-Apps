//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAMDASHElementParserFactory;

@interface HAMDASHBaseElementParser : NSObject
{
    HAMDASHElementParserFactory *_parserFactory;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)handleCharacters:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)endElementWithErrorDetails:(id)arg1;
- (_Bool)parseAttribute:(const char *)arg1 value:(const char *)arg2 valueLength:(unsigned long long)arg3;
- (id)startElementWithName:(const char *)arg1;
- (id)init;
- (id)initWithFactory:(id)arg1;

@end

