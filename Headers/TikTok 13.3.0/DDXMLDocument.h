//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDXMLNode.h"

@class NSData;

@interface DDXMLDocument : DDXMLNode
{
}

+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
+ (id)nodeWithDocPrimitive:(struct _xmlDoc *)arg1 owner:(id)arg2;
- (id)XMLDataWithOptions:(unsigned long long)arg1;
@property(readonly, copy) NSData *XMLData;
- (id)rootElement;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (id)initWithDocPrimitive:(struct _xmlDoc *)arg1 owner:(id)arg2;

@end

