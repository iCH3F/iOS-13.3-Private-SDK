//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXStyleMatrix : NSObject
{
}

+ (id)readReferenceFromNode:(struct _xmlNode )arg1;
+ (BOOL)readReferenceFromParentNode:(struct _xmlNode )arg1 name:(const char )arg2 inNamespace:(id)arg3 color:(id )arg4 index:(unsigned int )arg5;
+ (void)readFromNode:(struct _xmlNode )arg1 toStyleMatrix:(id)arg2 packagePart:(id)arg3 drawingState:(id)arg4;

@end

