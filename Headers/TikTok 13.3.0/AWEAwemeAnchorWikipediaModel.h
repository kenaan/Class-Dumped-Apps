//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface AWEAwemeAnchorWikipediaModel : AWEBaseApiModel <NSCoding>
{
    NSString *_keyword;
    NSString *_language;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

