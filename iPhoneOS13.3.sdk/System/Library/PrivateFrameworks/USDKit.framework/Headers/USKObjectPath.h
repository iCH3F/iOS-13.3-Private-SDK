//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface USKObjectPath : NSObject
{
    struct SdfPath _path;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)propertyName;
- (BOOL)isPropertyPath;
- (id)nodePath;
- (BOOL)isNodePath;
- (id)tokenValue;
- (id)pathByAppendingPropertyComponent:(id)arg1;
- (id)stringValue;
- (id)initWithToken:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithSdfPath:(struct SdfPath)arg1;
- (id)init;
- (struct SdfPath)path;

@end

