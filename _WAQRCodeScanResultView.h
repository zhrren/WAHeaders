/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WhatsApp-Structs.h"
#import "WAShapeView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface _WAQRCodeScanResultView : WAShapeView {
	CGSize _pathRectSize;
	UIImageView* _image;
	BOOL _match;
}
@property(assign, nonatomic) BOOL match;
+(id)pathForViewBounds:(CGRect)viewBounds;
-(void).cxx_destruct;
-(void)setBounds:(CGRect)bounds;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

