//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITextView, WBNoteProParagraphCell, WBNoteProParagraphManager;

@protocol WBNoteProParagraphManagerDelegate <NSObject>
- (void)paragraphManagerDidChangeSelection:(WBNoteProParagraphManager *)arg1;
- (WBNoteProParagraphCell *)paragraphManager:(WBNoteProParagraphManager *)arg1 needUpdateParagraphCellAtIndex:(unsigned long long)arg2;
- (void)paragraphManagerContentDidChange:(WBNoteProParagraphManager *)arg1;
- (void)paragraphManagerNeedScroolToTextView:(UITextView *)arg1;
- (void)paragraphManager:(WBNoteProParagraphManager *)arg1 needScroolToParagraphCellAtIndex:(unsigned long long)arg2;
- (void)paragraphManager:(WBNoteProParagraphManager *)arg1 didDeleteParagraphAtIndex:(unsigned long long)arg2;
- (void)paragraphManagerDidInsertParagraphs:(WBNoteProParagraphManager *)arg1;
- (void)paragraphManagerDidInsertParagraph:(WBNoteProParagraphManager *)arg1 atIndex:(unsigned long long)arg2 changeFocus:(_Bool)arg3;
@end

