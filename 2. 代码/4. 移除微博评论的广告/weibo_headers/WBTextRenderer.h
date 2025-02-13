//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

@class NSAttributedString, UIColor, WBTextLayout;
@protocol WBTextActiveRange, WBTextLayoutDelegate, WBTextRendererDelegate, WBTextRendererEventDelegate;

@interface WBTextRenderer : UIResponder
{
    _Bool drawing;
    id <WBTextRendererEventDelegate> _eventDelegate;
    double _lastTouchEndedTimeStamp;
    struct {
        unsigned int placeAttachment:1;
    } _renderDelegateHas;
    struct {
        unsigned int contextView:1;
        unsigned int activeRanges:1;
        unsigned int didPressActiveRange:1;
        unsigned int shouldInteractWithActiveRange:1;
    } _eventDelegateHas;
    struct CGPoint _touchesBeginPoint;
    _Bool _heightSensitiveLayout;
    _Bool _adjustEmoticonUI;
    WBTextLayout *_textLayout;
    id <WBTextRendererDelegate> _renderDelegate;
    UIColor *_shadowColor;
    double _shadowBlur;
    double _strokeWidth;
    id <WBTextActiveRange> _pressingActiveRange;
    id <WBTextActiveRange> _savedPressingActiveRange;
    struct UIOffset _shadowOffset;
    struct CGPoint _drawingOrigin;
}

+ (void)disableDebugMode;
+ (void)enableDebugMode;
+ (void)setDebugModeEnabled:(_Bool)arg1;
+ (_Bool)debugModeEnabled;
+ (void)debugModeSetEverythingNeedsDisplay;
+ (void)debugModeSetEverythingNeedsDisplayForView:(id)arg1;
@property(retain, nonatomic) id <WBTextActiveRange> savedPressingActiveRange; // @synthesize savedPressingActiveRange=_savedPressingActiveRange;
@property(retain, nonatomic) id <WBTextActiveRange> pressingActiveRange; // @synthesize pressingActiveRange=_pressingActiveRange;
@property(nonatomic) struct CGPoint drawingOrigin; // @synthesize drawingOrigin=_drawingOrigin;
@property(nonatomic) _Bool adjustEmoticonUI; // @synthesize adjustEmoticonUI=_adjustEmoticonUI;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) double shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(nonatomic) struct UIOffset shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) _Bool heightSensitiveLayout; // @synthesize heightSensitiveLayout=_heightSensitiveLayout;
@property(nonatomic) __weak id <WBTextRendererDelegate> renderDelegate; // @synthesize renderDelegate=_renderDelegate;
@property(retain, nonatomic) WBTextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (void).cxx_destruct;
- (struct UIOffset)drawingOffsetWithTextLayout:(id)arg1 layoutFrame:(id)arg2;
- (void)drawHighlightedBackgroundForActiveRange:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawAttachmentsWithAttributedString:(id)arg1 layoutFrame:(id)arg2 context:(struct CGContext *)arg3 shouldInterrupt:(CDUnknownBlockType)arg4;
- (void)drawAttachmentsWithAttributedString:(id)arg1 lineFragments:(id)arg2 drawingOffset:(struct CGPoint)arg3 context:(struct CGContext *)arg4 shouldInterrupt:(CDUnknownBlockType)arg5;
- (void)drawInContext:(struct CGContext *)arg1 visibleRect:(struct CGRect)arg2 placeAttachments:(_Bool)arg3 shouldInterruptBlock:(CDUnknownBlockType)arg4;
- (void)drawInContext:(struct CGContext *)arg1 shouldInterruptBlock:(CDUnknownBlockType)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)draw;
- (struct CGRect)_convertRectFromLayout:(struct CGRect)arg1 withDrawingOffset:(struct CGPoint)arg2;
- (struct CGPoint)_convertPointToCoreText:(struct CGPoint)arg1 withContextSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <WBTextLayoutDelegate> layoutDelegate;
@property(nonatomic) struct CGRect frame;
@property(retain, nonatomic) NSAttributedString *attributedString;
- (id)init;
- (struct CGRect)convertRectToLayout:(struct CGRect)arg1;
- (struct CGRect)convertRectFromLayout:(struct CGRect)arg1;
- (struct CGPoint)convertPointToLayout:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromLayout:(struct CGPoint)arg1;
- (void)debugModeDrawLineFramesWithLayoutFrame:(id)arg1 context:(struct CGContext *)arg2 offset:(struct UIOffset)arg3;
- (id)rangeInRanges:(id)arg1 forLayoutLocation:(struct CGPoint)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldHandleHit:(struct CGPoint)arg1;
- (void)eventDelegateDidPressActiveRange:(id)arg1;
- (id)eventDelegateActiveRanges;
- (id)eventDelegateContextView;
@property(nonatomic) __weak id <WBTextRendererEventDelegate> eventDelegate;
- (id)activeRangeAtLocation:(struct CGPoint)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct _NSRange)characterRangeForBoundingRect:(struct CGRect)arg1;
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;
- (struct CGPoint)locationForCharacterAtIndex:(unsigned long long)arg1;
- (struct CGRect)enumerateSelectionRectsForCharacterRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEnclosingRectsForCharacterRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateLineFragmentsForCharacterRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)firstSelectionRectForCharacterRange:(struct _NSRange)arg1;
- (struct CGRect)lineFragmentRectForCharacterAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct CGRect)lineFragmentRectForLineAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned long long)lineFragmentIndexForCharacterAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double layoutHeight;
@property(readonly, nonatomic) struct CGSize layoutSize;
@property(readonly, nonatomic) unsigned long long layoutLineCount;
@property(readonly, nonatomic) struct _NSRange layoutStringRange;
@property(readonly, nonatomic) _Bool layoutUpToDate;

@end

