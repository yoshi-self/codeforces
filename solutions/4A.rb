w = gets.to_i

answer = 'NO'
if w > 2 && w % 2 == 0
  answer = 'YES'
end

puts answer
