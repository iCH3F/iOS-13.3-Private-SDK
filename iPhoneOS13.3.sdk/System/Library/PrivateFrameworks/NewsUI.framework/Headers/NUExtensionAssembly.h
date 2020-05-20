//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NFAssembly-Protocol.h>

@protocol NUExtensionContextProvider;

@interface NUExtensionAssembly : NSObject <NFAssembly>
{
    id <NUExtensionContextProvider> _extensionContextProvider;
}

@property(readonly, nonatomic) __weak id <NUExtensionContextProvider> extensionContextProvider; // @synthesize extensionContextProvider=_extensionContextProvider;
// - (void).cxx_destruct;
- (void)loadInRegistry:(id)arg1;
- (id)initWithExtensionContextProvider:(id)arg1;

@end

