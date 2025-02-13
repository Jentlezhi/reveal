//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBTextParagraphStyleDelegate-Protocol.h"
#import "WBTextStorageDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSMutableAttributedString, NSString, UIColor, UIFont, WBTextParagraphStyle, WBTextStorage;

@interface WBTimelineAttributedText : NSObject <WBTextStorageDelegate, WBTextParagraphStyleDelegate>
{
    struct {
        unsigned int needsRebuild:1;
    } _flags;
    _Bool _trancated;
    _Bool _boldFont;
    _Bool _smallSizeEmoticons;
    _Bool _shouldShowSmallCardForcily;
    int _linkUnderlineStyle;
    UIColor *_textColor;
    UIColor *_activeRangeColor;
    WBTextStorage *_textStorage;
    NSString *_messageSearchKeyWord;
    long long _fontSize;
    double _fontWeight;
    UIFont *_normalTextFont;
    WBTextParagraphStyle *_paragraphStyle;
    unsigned long long _parseOptions;
    unsigned long long _textLigature;
    unsigned long long _scene;
    NSArray *_urlItems;
    NSArray *_keywords;
    NSArray *_topicItems;
    NSDictionary *_titleInfos;
    NSString *_textColorKey;
    NSString *_activeRangeColorKey;
    NSArray *_userActiveRanges;
    NSDictionary *_analysisParameters;
    NSDictionary *_customImageParse;
    NSMutableAttributedString *_attributedString;
    NSArray *_activeRanges;
    NSArray *_textAttachments;
    NSString *_plainTextForCharacterCounting;
    NSAttributedString *_storageDefaultAttributeString;
    struct CGSize _emoticonSize;
}

+ (void)resetLongTextTail;
+ (struct CGSize)sizeOfLongTextTailWithFontSize:(long long)arg1;
+ (id)defaultSchemeForTopicName:(id)arg1;
+ (id)shortenURLReplacementForCharacterCounting:(id)arg1;
@property(retain, nonatomic) NSAttributedString *storageDefaultAttributeString; // @synthesize storageDefaultAttributeString=_storageDefaultAttributeString;
@property(retain, nonatomic) NSString *plainTextForCharacterCounting; // @synthesize plainTextForCharacterCounting=_plainTextForCharacterCounting;
@property(retain, nonatomic) NSArray *textAttachments; // @synthesize textAttachments=_textAttachments;
@property(retain, nonatomic) NSArray *activeRanges; // @synthesize activeRanges=_activeRanges;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(copy, nonatomic) NSDictionary *customImageParse; // @synthesize customImageParse=_customImageParse;
@property(nonatomic) _Bool shouldShowSmallCardForcily; // @synthesize shouldShowSmallCardForcily=_shouldShowSmallCardForcily;
@property(retain, nonatomic) NSDictionary *analysisParameters; // @synthesize analysisParameters=_analysisParameters;
@property(retain, nonatomic) NSArray *userActiveRanges; // @synthesize userActiveRanges=_userActiveRanges;
@property(retain, nonatomic) NSString *activeRangeColorKey; // @synthesize activeRangeColorKey=_activeRangeColorKey;
@property(retain, nonatomic) NSString *textColorKey; // @synthesize textColorKey=_textColorKey;
@property(retain, nonatomic) NSDictionary *titleInfos; // @synthesize titleInfos=_titleInfos;
@property(retain, nonatomic) NSArray *topicItems; // @synthesize topicItems=_topicItems;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic, setter=setURLItems:) NSArray *urlItems; // @synthesize urlItems=_urlItems;
@property(nonatomic) struct CGSize emoticonSize; // @synthesize emoticonSize=_emoticonSize;
@property(nonatomic) _Bool smallSizeEmoticons; // @synthesize smallSizeEmoticons=_smallSizeEmoticons;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long textLigature; // @synthesize textLigature=_textLigature;
@property(nonatomic) int linkUnderlineStyle; // @synthesize linkUnderlineStyle=_linkUnderlineStyle;
@property(nonatomic) unsigned long long parseOptions; // @synthesize parseOptions=_parseOptions;
@property(retain, nonatomic) WBTextParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(retain, nonatomic) UIFont *normalTextFont; // @synthesize normalTextFont=_normalTextFont;
@property(nonatomic) _Bool boldFont; // @synthesize boldFont=_boldFont;
@property(nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *messageSearchKeyWord; // @synthesize messageSearchKeyWord=_messageSearchKeyWord;
@property(retain, nonatomic) WBTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (id)_parseString:(id)arg1 withKeyword:(id)arg2 andCurrentParsingResult:(id)arg3;
- (id)characterCountingPlainTextForTimelineURL:(id)arg1;
- (void)updatePlainTextForCharacterCountingWithAttributedString:(id)arg1;
- (void)updateParagraphStyleForAttributedString:(id)arg1;
- (long long)mergeAttachment:(id)arg1 toAttributedString:(id)arg2 withTextRange:(struct _NSRange)arg3 merged:(_Bool *)arg4;
- (void)insertFlavoredRange:(id)arg1 toMiniCardRange:(id)arg2;
- (id)filterParsingResult:(id)arg1;
- (void)extractAttachmentsAndParseActiveRangesFromParseResult:(id)arg1 toAttributedString:(id)arg2;
- (_Bool)_shouldHideMiniCardAttachment:(id)arg1;
- (id)substringOfPageTitle:(id)arg1 withWordCount:(unsigned long long)arg2 trancates:(_Bool *)arg3;
- (id)mutableAttributedString;
- (void)rebuild;
- (void)setColorWithActiveRange:(id)arg1 forAttributedString:(id)arg2;
- (id)attributedStringWithTextColor:(id)arg1;
- (void)wb_paragraphStyleDidUpdateAttribute:(id)arg1;
- (void)wb_textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (_Bool)isTrancationed;
- (_Bool)replaceEndingCharWithString:(id)arg1 andUrl:(id)arg2 inWidth:(double)arg3 andLineLimited:(unsigned long long)arg4 andActualLineDisplayed:(unsigned long long)arg5;
- (_Bool)replaceEndingChar2WithString:(id)arg1 andUrl:(id)arg2 inWidth:(double)arg3 andLineLimited:(unsigned long long)arg4 andActualLineDisplayed:(unsigned long long)arg5;
- (_Bool)isTrancationedWithSurfix:(id)arg1 contentStr:(id)arg2 andUrl:(id)arg3 inWidth:(double)arg4 andLimitedLine:(unsigned long long)arg5;
- (id)stringByTrimmingTrailCharactersInSet:(id)arg1 withString:(id)arg2;
- (_Bool)trancationTextWithLineWidth:(double)arg1 andLineLimited:(unsigned long long)arg2 andActualLineDisplayed:(unsigned long long)arg3;
- (id)trancationText2WithLineWidth:(double)arg1 andLineLimited:(unsigned long long)arg2 andActualLineDisplayed:(unsigned long long)arg3 forceTrancation:(_Bool)arg4 isNeedExclusion:(_Bool)arg5;
- (id)trancationText2WithLineWidth:(double)arg1 andLineLimited:(unsigned long long)arg2 andActualLineDisplayed:(unsigned long long)arg3 forceTrancation:(_Bool)arg4;
- (id)timelineURLForTitle:(id)arg1;
- (id)timelineURLForScheme:(id)arg1;
- (id)schemeForMiniCardActiveRange:(id)arg1;
- (id)schemeForTitleName:(id)arg1;
- (id)schemeForTopicName:(id)arg1;
- (id)accessibilityPlainText;
- (struct _NSRange)attributedStringRangeForPlainTextRange:(struct _NSRange)arg1;
- (struct _NSRange)plainTextRangeForAttributedStringRange:(struct _NSRange)arg1;
- (id)textAttachmentsInRange:(struct _NSRange)arg1;
@property(retain, nonatomic) UIColor *activeRangeColor; // @synthesize activeRangeColor=_activeRangeColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)resetTextStorageWithAttributeText:(id)arg1;
- (void)resetTextStorageWithPlainText:(id)arg1;
@property(readonly, nonatomic) NSString *plainText;
- (void)rebuildIfNeeded;
- (void)setNeedsRebuild;
- (id)initWithPlainText:(id)arg1;
- (id)init;
- (void)dealloc;
- (struct CGSize)sizeConstrainedToWidth:(double)arg1 numberOfLines:(long long)arg2 derivedLineCount:(long long *)arg3;
- (struct CGSize)sizeConstrainedToWidth:(double)arg1 numberOfLines:(long long)arg2;
- (struct CGSize)sizeConstrainedToWidth:(double)arg1;
- (_Bool)accessibilityHasTextLinks;
@property(nonatomic) unsigned char textAlignment;
@property(nonatomic) unsigned char lineBreakMode;
@property(nonatomic) double maximunLineHeight;
@property(nonatomic) double lineSpacing;
@property(nonatomic) _Bool allowsDynamicLineSpacing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

