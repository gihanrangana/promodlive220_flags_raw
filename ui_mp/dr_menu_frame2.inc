	

		itemDef 
		{
			rect			80 30 480 420
			style			WINDOW_STYLE_SHADER				
			background		"ingame_bg"
			border			1			
			bordercolor		1 1 1 1
			visible			1
			decoration
		}

		// nickname
		/*itemDef
		{
			visible			when( menuisopen( "team_marinesopfor.menu" ) )
			origin			90 80
			forecolor		1 1 1 1
			exp				text( dvarString( "name" ) )
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_LEFT
			textscale		0.8
			decoration
		}*/

		itemDef
		{
			visible			1 //when( !menuisopen( "team_marinesopfor.menu" ) )
			origin			510 68
			forecolor		1 1 1 1
			exp				text( dvarString( "name" ) )
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_RIGHT
			textscale		0.4
			decoration
		}

		// menu name
		itemDef
		{
			visible			1 //when( !menuisopen( "team_marinesopfor.menu" ) )
			origin			90 80
			forecolor		1 1 1 1
			exp				text( dvarString( "menuName" ) )
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_LEFT
			textscale		0.6
			decoration
		}
		
            //ZaGGoreC :D FIX
		itemDef 
		{
			rect			81 90 480 1
			style			WINDOW_STYLE_SHADER
			background		"white"
			forecolor		1 1 1 1
			visible			1
			decoration
		} 

		// nickname
		itemDef
		{
			visible			1
			origin			550 445
			forecolor		1 1 1 1
			text			"^7CWP"
			textfont		UI_FONT_NORMAL
			textalign		ITEM_ALIGN_RIGHT
			textscale		0.3
			decoration
		}

		itemDef
		{
			style		WINDOW_STYLE_FILLED 
			forecolor	1 1 1 0.8 
			rect		540 435 10 10

			type		ITEM_TYPE_BUTTON
			exp			text( " " ) 
			textfont	UI_FONT_NORMAL
			textstyle	ITEM_TEXTSTYLE_SHADOWED 
			textalign	ITEM_ALIGN_LEFT
			textscale	0.32
			textalignx	70
			textaligny	22
			visible		when( !dvarInt( "dr_ee1" ) )
			action 
			{ 
				play "ee1"; 
				execNow "set dr_ee1 1";
			} 
		} 

//+"  -"+"U "+"M"+"A"+"D"+"?"

