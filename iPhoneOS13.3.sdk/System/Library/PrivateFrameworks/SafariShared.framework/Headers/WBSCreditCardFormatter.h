//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface WBSCreditCardFormatter : NSFormatter
{
    BOOL _showLastFourDigits;
    BOOL _showCreditCardNumber;
    BOOL _allowsUnknownCardTypes;
    BOOL _isVirtualCard;
}

@property(nonatomic) BOOL isVirtualCard; // @synthesize isVirtualCard=_isVirtualCard;
@property(nonatomic) BOOL allowsUnknownCardTypes; // @synthesize allowsUnknownCardTypes=_allowsUnknownCardTypes;
@property(nonatomic) BOOL showCreditCardNumber; // @synthesize showCreditCardNumber=_showCreditCardNumber;
@property(nonatomic) BOOL showLastFourDigits; // @synthesize showLastFourDigits=_showLastFourDigits;
- (_NSRange)_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(_NSRange)arg2 inNormalizedCreditCardNumber:(id)arg3;
- (_NSRange)_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(_NSRange)arg2;
- (id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(BOOL)arg2;
- (BOOL)isPartialStringValid:(id )arg1 proposedSelectedRange:(_NSRange )arg2 originalString:(id)arg3 originalSelectedRange:(_NSRange)arg4 errorDescription:(id )arg5;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id )arg2 errorDescription:(id )arg3;
- (BOOL)getObjectValue:(id )arg1 forString:(id)arg2 errorDescription:(id )arg3;
- (id)stringForObjectValue:(id)arg1;

@end

