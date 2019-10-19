//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TWTRJSONConvertible-Protocol.h"

@class NSDictionary, NSString;

@interface TWTRPlayerCardEntityBindingValues : NSObject <TWTRJSONConvertible, NSCoding, NSCopying>
{
    NSString *_appName;
    NSString *_playerStreamURL;
    NSString *_playerURL;
    NSString *_playerImageURL;
    NSString *_cardDescription;
    NSString *_IDString;
    NSDictionary *_validatedDictionary;
    struct CGSize _playerImageSize;
}

+ (id)validateJSONDictionary:(id)arg1;
+ (id)JSONValidator;
@property(copy, nonatomic) NSDictionary *validatedDictionary; // @synthesize validatedDictionary=_validatedDictionary;
@property(readonly, nonatomic) NSString *IDString; // @synthesize IDString=_IDString;
@property(readonly, copy, nonatomic) NSString *cardDescription; // @synthesize cardDescription=_cardDescription;
@property(readonly, nonatomic) struct CGSize playerImageSize; // @synthesize playerImageSize=_playerImageSize;
@property(readonly, copy, nonatomic) NSString *playerImageURL; // @synthesize playerImageURL=_playerImageURL;
@property(readonly, copy, nonatomic) NSString *playerURL; // @synthesize playerURL=_playerURL;
@property(readonly, copy, nonatomic) NSString *playerStreamURL; // @synthesize playerStreamURL=_playerStreamURL;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)setPropertiesFromValidatedDictionary:(id)arg1;
- (_Bool)isEqualToPlayerCardEntityBindingValues:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValidatedDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

