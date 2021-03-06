/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "TextMessage.h"


@interface _TextMessage_CoreText : TextMessage {
	CTFramesetterRef _framesetter;
}
+(void)initialize;
-(CGPoint)lineBoundsWithRange:(CTLineRef)range range:(XXStruct_K5nmsA)range2;
-(CGPoint)visualRangeOfTextRange:(XXStruct_K5nmsA)textRange inLine:(CTLineRef)line;
-(void)prepareFramesetterIfNeeded;
-(CTFramesetterRef)createFramesetterForCurrentTextUsingTextBlocks:(id)currentTextUsingTextBlocks;
-(void)setNeedsRedraw;
-(void)updateAttributesForTextBlock:(id)textBlock;
-(void)drawInRect:(CGRect)rect context:(CGContextRef)context lastLineRect:(CGRect*)rect3;
-(CGRect)boundingRectWithSize:(CGSize)size lastLineRect:(CGRect*)rect;
-(void)enableDataDetection:(BOOL)detection onQueue:(id)queue withCompletionHandler:(id)completionHandler;
-(void)setFont:(id)font;
-(void)dealloc;
@end

