//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString, TIKeyboardInputManagerState, TIKeyboardIntermediateText;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding>
{
    BOOL _assertDefaultKeyPlane;
    TIKeyboardInputManagerState *_inputManagerState;
    TIKeyboardIntermediateText *_intermediateText;
    NSString *_layoutTag;
    NSString *_accentKeyString;
    NSArray *_multilingualLanguages;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *multilingualLanguages; // @synthesize multilingualLanguages=_multilingualLanguages;
@property(nonatomic) BOOL assertDefaultKeyPlane; // @synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane;
@property(copy, nonatomic) NSString *accentKeyString; // @synthesize accentKeyString=_accentKeyString;
@property(copy, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;
@property(retain, nonatomic) TIKeyboardIntermediateText *intermediateText; // @synthesize intermediateText=_intermediateText;
@property(copy, nonatomic) TIKeyboardInputManagerState *inputManagerState; // @synthesize inputManagerState=_inputManagerState;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

