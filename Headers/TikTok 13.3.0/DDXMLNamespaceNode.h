//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDXMLNode.h"

@interface DDXMLNamespaceNode : DDXMLNode
{
    struct _xmlNode *nsParentPtr;
}

+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
+ (id)nodeWithNsPrimitive:(struct _xmlNs *)arg1 nsParent:(struct _xmlNode *)arg2 owner:(id)arg3;
- (void)_setNsParentPtr:(struct _xmlNode *)arg1;
- (struct _xmlNode *)_nsParentPtr;
- (_Bool)_hasParent;
- (id)URI;
- (void)setURI:(id)arg1;
- (id)prefix;
- (id)localName;
- (struct _xmlStd *)_XPathPreProcess:(id)arg1;
- (void)detach;
- (id)nextNode;
- (id)previousNode;
- (id)nextSibling;
- (id)previousSibling;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)children;
- (unsigned long long)childCount;
- (id)parent;
- (id)rootDocument;
- (unsigned long long)level;
- (unsigned long long)index;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)initWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (id)initWithNsPrimitive:(struct _xmlNs *)arg1 nsParent:(struct _xmlNode *)arg2 owner:(id)arg3;

@end

