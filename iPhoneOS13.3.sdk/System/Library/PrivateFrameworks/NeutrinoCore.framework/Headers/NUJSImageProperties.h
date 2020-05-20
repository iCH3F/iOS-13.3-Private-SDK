//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSImagePropertiesExport-Protocol.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;
@protocol NUImageProperties;

@interface NUJSImageProperties : NUJSProxy <NUJSImagePropertiesExport>
{
}

@property(readonly) NUJSRAWImageProperties *rawImageProperties;
@property(readonly) NUJSDepthProperties *depthProperties;
@property(readonly) NSString *fileUTI;
@property(readonly) NSDictionary *metadata;
@property(readonly) id <NUImageProperties> imageProperties;
- (id)initWithImageProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

